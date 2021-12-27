<?php

class Complex {
	private $real;
	private $imaginary;

	public function Complex ($real=0, $imaginary=0) {
		$this->real = $real;
		$this->imaginary = $imaginary; 
	}

	public function getReal() {
		return $this->real;
	}

	public function getImaginary() {
		return $this->imaginary;
	}

	public function equal($other) {
		return $this->real == $other->real && $this->imaginary == $other->imaginary;
	}

	public function notequals($other) {
		return !($this->real == $other->real && $this->imaginary == $other->imaginary);
	}

	public function increment($other) {
		$this->real += $other->real;
		$this->imaginary += $other->imaginary;
	}

	public function decrement($other) {
		$this->real -= $other->real;
		$this->imaginary -= $other->imaginary;
	}

	public function sum($other) {
		$result = $this;

		$result->real += $other->real;
		$result->imaginary += $other->imaginary;

		return $result;
	}


	public function substr($other) {
		$result = $this;

		$result->real -= $other->real;
		$result->imaginary -= $other->imaginary;
		
		return $result;
	}

	public function multiple($other) {
		$result = $this;

		$result->real *= $other->real;
		$result->imaginary *= $other->imaginary;

		return $result;
	}

	public function __toString() {
		return sprintf("(%d, %d)", $this->real, $this->imaginary);
	}
}

?>