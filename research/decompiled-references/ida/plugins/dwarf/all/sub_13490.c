__int64 __fastcall sub_13490(__int64 a1, _QWORD *a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rdx
  _QWORD v6[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = a4[1];
  v6[9] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_8DDA0(a1, *a4, v4) || !(unsigned __int8)sub_90090(a1, "__TEXT", v6) )
    return 0xFFFFFFFFLL;
  *a2 = v6[3];
  return 0;
}

