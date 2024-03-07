// logical operators 

// and - && -> when all the conditions are true -> jyare badhi conditions true hoy tayre  
// or - || -> when any one condition is true -> jyare koy 1 condition true hoy tare 


(1 > 2) || (4 > 2) || (4 > 1) -> true 

(1 > 2) && (4 > 2) && (4 > 1) -> false   

(1 > 4 )|| (4 < 9) -> true 
(4 >= 3) && (3 >= 3) -> true 

(( 4 > 4 ) && (4 < 1)) || ((4 > 2) && (3 < 1)) -> false 

    f       &&    f         t      &&   f 
            f          ||           f 
                        false

( (2 > 4)  ||  (4 < 1) )  &&  ( (5 >= 5)  &&  (5 < 1) ) ->  false 