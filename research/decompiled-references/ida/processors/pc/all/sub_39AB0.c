__int64 __fastcall sub_39AB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v5[133]; // [rsp+0h] [rbp-428h] BYREF

  v5[129] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( (unsigned __int8)sub_615A0(a2, v5, a3, (unsigned int)a4) )
    sub_30660((__int64 *)a1);
  return a1;
}
