select  e.unique_id , a.name
from EmployeeUNI as e
right join  Employees as a
on  e.id = a.id