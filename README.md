# dynamic_List
`List list;` -> Default size=0 array;<br>
`List list(5);` -> size=5 array;<br>
`list.Clear();` -> all variable = 0;<br>
`list.Reset();` -> delete all variables but class is not deleted<br>
`list.Get(3);` -> Returns the value in list number 3<br>
`list.Set(3,5);` -> list number 3 variable change to 5<br>
`list.Print();` -> All array value print console<br>
`list.Print(5);` -> Starts at number 5 and console print to the end of the series<br>
`list.Print(5,10);` -> Starts at number 5 and goes to number 10 console print<br>
`list.Size();` -> return list size<br>
`list.Add(4);` -> Adds the value 4 to the end of the list<br>
`list.CheckItem(4);` -> If there is 4 in the array it says true or false<br>
`list.Find(5);` -> Tell where 5 is<br>
`list.AddIn(3,5);` -> Adds the value 5 to the number 3 but does not delete the value at number 3. Moves forward<br>

Simple <br>
`int main(){`<br>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`List<int> list1;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`List<int> list2;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list1.Add(7);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list1.Add(8);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list1.Add(9);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list1.Add(10);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(1);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(2);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(3);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(4);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(5);`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`list2.Add(6);`	<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`List<int> res;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	`res=list1+list2;`<br>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`res.Print();`<br>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`return 0;`<br>
`}`<br>
