import java.util.*;

class Program {

  public boolean classPhotos(
      ArrayList<Integer> redShirtHeights, ArrayList<Integer> blueShirtHeights) {
    // Write your code here.
		Collections.sort(redShirtHeights);
		Collections.sort(blueShirtHeights);
		String longer = "";
		if(redShirtHeights.get(0) < blueShirtHeights.get(0)){
			longer = "blue";
		}
		else{
			longer = "red";
		}
		for(int i = 0; i < redShirtHeights.size(); i++){
			if(longer == "red" && blueShirtHeights.get(i) >= redShirtHeights.get(i))
					return false;
			else{
				if(longer == "blue" && redShirtHeights.get(i) >= blueShirtHeights.get(i))
					return false;
			}
		}
    return true;
  }
}
