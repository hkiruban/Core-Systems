# Optimization Engine: Resource Allocation Solver

A high-performance C++ implementation of the **Simplex Algorithm** designed to solve Linear Programming (LP) problems. This engine is specifically configured to optimize academic resource distribution (study hours, cognitive energy) to maximize cumulative GPA outcomes based on **CO 250** optimization principles.

## 🛠 Technical Specifications

* **Core Algorithm:** Revised Simplex Method.
* **Standard Form:** All problems are processed in **Standard Equality Form (SEF)** as Maximization problems.
* **Language:** C++17/20 (Templates, OOP).
* **Optimization Logic:** Primal Simplex with Bland’s Rule for anti-cycling.



## 📈 The Optimization Problem

The engine solves the following primal problem:

$$\text{Maximize } Z = \mathbf{c}^T \mathbf{x}$$
$$\text{Subject to: } A\mathbf{x} = \mathbf{b}, \mathbf{x} \geq 0$$

Where:
* $\mathbf{c}$: Vector of course weights (Credit value $\times$ Difficulty coefficient).
* $\mathbf{x}$: Vector of allocated hours per course.
* $A$: Constraint matrix (Time limits, minimum grade requirements, prerequisite dependencies).
* $\mathbf{b}$: Vector of available resources.

## 🏗 Project Architecture

### 1. Matrix & Linear Algebra Layer
Uses a template-based `Matrix<T>` class to handle row operations and pivoting. This layer ensures memory efficiency by utilizing a single-dimensional vector representation of the 2D tableau.

### 2. SEF Converter
A pre-processing module that:
* Adds **Slack Variables** for $\leq$ constraints.
* Adds **Surplus & Artificial Variables** for $\geq$ constraints.
* Converts Minimization objectives to Maximization via coefficient negation.

### 3. The Solver
The solver iterates through the basis, selecting the entering variable via the most negative reduced cost and the leaving variable via the minimum ratio test.




## 🚀 Key Features

* **Shadow Pricing:** Outputs the dual variables ($y$) to determine the marginal utility of an additional hour of study time for any given course.
* **Feasibility Check:** Detects and reports infeasible constraints (e.g., when credit requirements exceed available hours).
* **Sensitivity Analysis:** Calculates the range in which a course's weight can change without altering the optimal allocation.
