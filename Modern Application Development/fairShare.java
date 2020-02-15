import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.math.RoundingMode;
import java.text.DecimalFormat;
public class fairShare {
      private static DecimalFormat df = new DecimalFormat("0.00");

      static int w;
      static int count=0;
      static int checkpoint=0;
      static int n;
      static String strCopy;
      public static int e;
      static double a[][] = new double[10][2];
  
        public static double report(int e){
    	    if(a[e][0]==0){
    	        return 0;
    	    }
    	    else{
        		double sum=0;
        		double rep;		
		        for(int y=0;y<10;y++){
			    sum = sum + a[y][1];	
		    }
		    sum = sum/(n);
		    rep = a[e][1] - sum;
			return rep;
	        }
	    }
		
		public static void expense(int w, double value){   
	        if(a[w][0] != 0)
		        a[w][1] = a[w][1] + value;
	        else
	            System.out.println("Error");
	    }

        public static void register(int i){
            a[i][0] = 1; 
        }

        public static void main(String[] args) throws IOException{
            for(int i=0;i<10;i++){
                a[i][0] = 0;
            }
        
            List<String> text = new ArrayList<>();
        
            try(BufferedReader reader = new BufferedReader(new InputStreamReader(System.in))){
                String line;
                for( ; ; ){
                    line = reader.readLine();
                    if(line.equals("end")) 
                        break;
                    text.add(line);             
                } 
            }
        
            text.stream().forEach((String str)->{
				String[] part = str.split("\\s+");
				if(part[0].equals("register")){
					n = part.length-1;
					for(count=0;count<part.length;count++){
						if(part[count].equals("f1")){ 
							int a = 0;
							register(a);
						}
                    if(part[count].equals("f2")){ 
                        int a = 1;
                        register(a);
                    }
                    if(part[count].equals("f3")){ 
                        int a = 2;
                        register(a);
                    }
                    if(part[count].equals("f4")){ 
                        int a = 3;
                        register(a);
                    }
                    if(part[count].equals("f5")){
                        int a = 4;
                        register(a);
                    }
                    if(part[count].equals("f6")){ 
                        int a = 5;
                        register(a);
                    }
                    if(part[count].equals("f7")){ 
                        int a = 6;
                        register(a);
                    }
                    if(part[count].equals("f8")){ 
                        int a = 7;
                        register(a);
                    }
                    if(part[count].equals("f9")){                
                        int a = 8;
                        register(a);
                    }
                    if(part[count].equals("f10")){ 
                        int a = 9;
                        register(a);
                    }
                }
            }
       
            else if((part[0].equals("expense"))){
                if(part[1].equals("f1")){	
				w = 0;
			}
			if(part[1].equals("f2")){	
				w = 1;
			}
			if(part[1].equals("f3")){	
				w = 2;
			}
			if(part[1].equals("f4")){	
				w = 3;
			}
			if(part[1].equals("f5")){	
				w = 4;
			}
			if(part[1].equals("f6")){	
				w = 5;
			}
			if(part[1].equals("f7")){	
				w = 6;
			}
			if(part[1].equals("f8")){	
				w = 7;
			}
			if(part[1].equals("f9")){	
				w = 8;
			}
			if(part[1].equals("f10")){	
				w = 9;		
			}
			double value = Double.parseDouble(part[2]);
			expense(w, value);
        }
        else if(part[0].equals("report")){
            if(part[1].equals("f1")){	
				e = 0;
			}
			if(part[1].equals("f2")){	
				e = 1;
			}
			if(part[1].equals("f3")){	
				e = 2;
			}
			if(part[1].equals("f4")){	
				e = 3;
			}
			if(part[1].equals("f5")){	
				e = 4;
			}
			if(part[1].equals("f6")){	
				e = 5;
			}
			if(part[1].equals("f7")){	
				e = 6;
			}
			if(part[1].equals("f8")){	
				e = 7;
			}
			if(part[1].equals("f9")){	
				e = 8;
			}
			if(part[1].equals("f10")){	
				e = 9;
			}
			double p = report(e);

            if(p!=0)
          		System.out.println(df.format(p));
          	else
          		System.out.println("Error");
        }
    });
    }
}