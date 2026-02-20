#Academic Risk & Predictive Grade Model

## 1. Project Overview
A high-performance data pipeline and analytics dashboard designed to model GPA outcomes. By integrating real-time assignment data with historical course difficulty metrics (curves), this tool identifies academic risk and simulates final grade scenarios.

## 2. Technical Stack
* **Language:** Python 3.10+ (ETL & Analysis)
* **Database:** SQLite (Relational Storage)
* **Analytics:** SQL (Window Functions & Predictive Views)
* **Visualization:** Power BI Desktop
* **Environment:** VS Code + Git

## 3. Data Architecture
The system utilizes a relational schema to join internal performance with external market (course) data.



### Data Entities
* **Course Performance:** Normalized table for weights and achieved scores.
* **Historical Metrics:** Reference table for historical means and difficulty volatility.

## 4. Pipeline Phases
1.  **Extraction:** Python scripts parse `Logistics.xlsx` and scrape course metadata.
2.  **Transformation:** Data cleaning via Pandas; calculation of remaining weighted potential.
3.  **Loading:** Automated upsert into `academic_risk.db`.
4.  **Modeling:** SQL Views calculate "Best Case / Worst Case" final outcomes.
5.  **Visualization:** Power BI dashboard for real-time risk monitoring.

## 5. Mathematical Model
Final grade projections are calculated as:
$$G_{proj} = \sum (M_{achieved} \times W_{achieved}) + (Mean_{hist} \times W_{rem})$$



## 6. Future Enhancements
* Integration with **Project 3: The Optimization Engine** (C++) for GPA maximization.
* Automated scraper for UW Flow GraphQL API.
