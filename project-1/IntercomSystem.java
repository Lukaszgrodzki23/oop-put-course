import java.util.ArrayList;
import java.util.List;

public class IntercomSystem {

    private List<Flat> flats;
    private Flat currentFlat;
    private int pin;

    public IntercomSystem(int pin) {
        this.flats = new ArrayList<>();
        this.pin = pin;
    }

    public IntercomSystem(List<Flat> flats, int pin) {
        this.flats = flats;
        this.pin = pin;
    }

    public void addFlat(Flat flat) {
        flats.add(flat);
    }

    public void inputPin(int pin){
        if (pin == this.pin){
            System.out.println("Door is open");
        }
        else{
            System.out.println("Wrong PIN");
        }
    }

    public void selectFlat(int flatNumber) {
        for (Flat flat : flats) {
            if (flat.getNumber() == flatNumber) {
                this.currentFlat = flat;
                break;
            }
        }
    }

    public void makeCall() {
        this.currentFlat.receiveCall();
    }

    public void answerCall() {
        this.currentFlat.answerCall();
    }

    public void endCall() {
        this.currentFlat.endCall();
    }
}
