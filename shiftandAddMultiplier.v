`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:11:50 10/05/2019 
// Design Name: 
// Module Name:    shiftandAddMultiplier 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module shiftandAddMultiplier(
    input signed [3:0] a,b ,
    output reg signed  [7 : 0] p
    );

reg [3:0] q;
reg [4:0] ac;
always@(a or b)
begin
ac = 0;

q = b;
repeat (4) 
begin
if(q[0])
begin 
	ac= ac + a; 
end 
q = q >> 1 ;
q[3] = ac[0];
ac = ac >> 1 ; 
end
p = {ac,q};
end
endmodule
