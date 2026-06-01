unsigned __int64 __fastcall sub_3A640(int *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v5[18]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v6; // [rsp+22h] [rbp-56h]
  char v7; // [rsp+43h] [rbp-35h]
  _BYTE v8[8]; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) == 18 )
  {
    netnode_check(&v4, "$ elfnode", 0, 0);
    v2 = netnode_valobj(v4, v5, 72);
    v3 = 0;
    if ( v2 != 72 || (v3 = 2, v6 == 249) )
      *a1 = v3;
    else
      *a1 = (v7 & 2) != 0;
  }
  else if ( (unsigned int)getinf(5) == 27 )
  {
    *a1 = 0;
    if ( get_bytes(v8, 8, 2415919104LL, 0, 0) != -1 && v8[0] == 0xC0 && v8[1] == 96 )
      *a1 = 2;
  }
  return v9 - __readfsqword(0x28u);
}

