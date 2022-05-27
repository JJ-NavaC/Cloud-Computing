import { Button, Col, Container, Input, Label, Row } from "reactstrap";
import "./App.css";
import LineChart from "./LineChart";

function App() {
  return (
    <>
      <Container>
        <Label>Nava Cuellar José De Jesús</Label>
        <Row>
          <Col>
            <Label>Conjunto: </Label>
            <Input></Input>
            <Button>Solve</Button>
          </Col>
        </Row>
        <Row>
          <Col>
            <div style={{width: "1000px"}}>
              <LineChart />
            </div>
          </Col>
        </Row>
      </Container>
    </>
  );
}

export default App;
