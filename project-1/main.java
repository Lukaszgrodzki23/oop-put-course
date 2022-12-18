import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;




public class Main{
    public static void main(String[] args) {

        IntercomSystem intercom = new IntercomSystem(1234);

        intercom.addFlat(new Flat(1, "Smith"));
        intercom.addFlat(new Flat(2, "Johnson"));
        intercom.addFlat(new Flat(3, "Williams"));
        intercom.addFlat(new Flat(4, "Miller"));

        intercom.selectFlat(3);
        intercom.makeCall();
        intercom.answerCall();
        intercom.inputPin(1234);
        intercom.endCall();

    }
}
