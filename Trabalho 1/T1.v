module pisca(input clk, output luz);
	assign luz = clk;
endmodule

module testeClk;
	reg r_clock;
	wire luz;

	always #5 r_clock = ~r_clock;
		pisca PISCA(r_clock, luz);

		initial	begin
			$dumpvars (0, PISCA);
				r_clock <= 0;
				# 500;
			$finish;
		end
endmodule
