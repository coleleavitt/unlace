__int64 __fastcall sub_32610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v8; // [rsp+0h] [rbp-158h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-148h] BYREF
  _BYTE v10[264]; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  if ( (unsigned __int8)sub_945B0(a4, &v8, 24) )
  {
    v9[0] = sub_951C0(a4, &v8);
    v9[1] = v6;
    sub_84A60(v10);
    if ( (v9[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v9[0] != -1 && (unsigned __int8)sub_98E20(v9, v10) )
      sub_A1190(v10, *(_QWORD *)(a3 + 8), 1);
    sub_1B750((__int64)v10);
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  sub_84A10(&v8);
  return a1;
}

