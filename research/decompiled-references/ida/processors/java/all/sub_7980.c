__int64 __fastcall sub_7980(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, _BYTE *a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  _WORD v10[4]; // [rsp+10h] [rbp-C8h] BYREF
  char v11; // [rsp+18h] [rbp-C0h]
  int v12; // [rsp+1Ch] [rbp-BCh]
  __int64 v13; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+98h] [rbp-40h]

  v4 = (char)*a4;
  v14 = __readfsqword(0x28u);
  if ( v4 == 1 )
  {
    v6 = *(unsigned __int16 *)(a1 + 33031);
    v5 = 44;
  }
  else
  {
    if ( v4 != -1 )
      sub_E6C0(0);
    v5 = 124;
    v6 = -(__int64)*(unsigned __int16 *)(a1 + 33041);
  }
  if ( !v6 )
    return -1;
  while ( 1 )
  {
    if ( v5 != netnode_supval(*(_QWORD *)(a1 + 33320), v6, v10, 128, 83) )
      sub_E6A0();
    if ( (v11 & 3) == 0 && !(unsigned int)sub_1A030(a1, a2, v10[0]) && !(unsigned int)sub_1A030(a1, a3, v10[1]) )
      break;
    v6 -= v4;
    if ( !v6 )
      return -1;
  }
  if ( v4 != -1 )
    return *(_QWORD *)(a1 + 33053) + v10[3];
  if ( v12 )
    *a4 = 0;
  return v13;
}

