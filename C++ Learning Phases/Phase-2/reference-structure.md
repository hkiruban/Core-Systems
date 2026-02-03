| Code | Memory Action | Value of Variable |
| :--- | :--- | :--- |
| `int x;` | Space reserved on the Stack. | **Garbage** (Random bits). |
| `int x = 0;` | Space reserved and cleared. | `0` |
| `int &y = x;` | No new space; `y` points to `x`. | Same as `x`. |
