__int64 __fastcall sub_3ED6D0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-28h]
  __int64 v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+0h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-10h]

  switch ( a2 )
  {
    case 0LL:
      return sub_3E8420(a1, 4u, 1, 3, 0x3BEA45E214ADDC55LL, a3, 0);
    case 1LL:
      sub_3E8420(a1, 4u, 1, 0, 0x3BEA45E214ADDC55LL, a3, 0);
      return v7;
    case 2LL:
      return sub_3E8420(a1, 4u, 1, 1, 0x3BEA45E214ADDC55LL, a3, 0);
    case 3LL:
      return sub_3E8420(a1, 0x13u, 1, 0, 1, a3, 0);
    case 4LL:
      sub_3E8420(a1, 4u, 1, 2, 0x3BEA45E214ADDC55LL, a3, 0);
      return v8;
    case 5LL:
      sub_1D14D0(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, a3, 0);
      return v9;
    case 6LL:
      return sub_3E8420(a1, 0x15u, 1, 2, 3, a3, 0);
    case 7LL:
      v6 = a3;
      sub_3E8420(a1, 0x15u, 1, 2, 3, a3, 0);
      return sub_3E8420(a1, 0x13u, 1, v6, 1, v6, 0);
    case 8LL:
      return sub_3E8420(a1, 6u, 1, 3, 0x3BEA45E214ADDC55LL, a3, 0);
    case 9LL:
      return sub_3E8420(a1, 6u, 1, 0, 0x3BEA45E214ADDC55LL, a3, 0);
    case 10LL:
      return sub_3E8420(a1, 6u, 1, 1, 0x3BEA45E214ADDC55LL, a3, 0);
    case 11LL:
      v4 = a3;
      v10 = a1;
      sub_3E8420(a1, 0x13u, 1, 0, 1, a3, 0);
      return sub_3E8420(v10, 6u, 1, v4, 0x3BEA45E214ADDC55LL, v4, 0);
    case 12LL:
      return sub_3E8420(a1, 6u, 1, 2, 0x3BEA45E214ADDC55LL, a3, 0);
    case 13LL:
      return sub_3E8420(a1, 4u, 1, **(int **)(*(_QWORD *)(a1 + 832) + 512LL), 0x3BEA45E214ADDC55LL, a3, 0);
    case 14LL:
      v4 = a3;
      v10 = a1;
      sub_3E8420(a1, 0x15u, 1, 2, 3, a3, 0);
      return sub_3E8420(v10, 6u, 1, v4, 0x3BEA45E214ADDC55LL, v4, 0);
    case 15LL:
      v4 = a3;
      v10 = a1;
      sub_3E8420(a1, 0x15u, 1, 2, 3, a3, 0);
      sub_3E8420(a1, 0x13u, 1, v4, 1, v4, 0);
      return sub_3E8420(v10, 6u, 1, v4, 0x3BEA45E214ADDC55LL, v4, 0);
    default:
      if ( !under_debugger )
        sub_37CFE0(0xCECFu, a4);
      BUG();
  }
}

