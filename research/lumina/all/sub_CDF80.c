__int64 __fastcall sub_CDF80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  unsigned __int16 v9; // [rsp+24h] [rbp-34h]
  unsigned int v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v2 = a1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( (v3 & 0x41000) == 0 )
      break;
    if ( (v3 & 0x40000) != 0 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8LL);
      if ( !v2 )
        return 0;
    }
    else
    {
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        return 0;
    }
  }
  if ( *(_BYTE *)v2 == 51 )
  {
    v2 = *(_QWORD *)(v2 + 16);
  }
  else
  {
    if ( *(_BYTE *)v2 != 44 )
    {
      v7 = 0;
      v8 = 0;
      v10 = a2;
      v6 = sub_CEE10;
      v9 = 0;
      goto LABEL_17;
    }
    if ( (unsigned int)sub_CDF80(*(_QWORD *)(v2 + 16), a2) )
      return 1;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v2 + 24);
      if ( *(_BYTE *)v2 != 44 )
        break;
      if ( (unsigned int)sub_CDF80(*(_QWORD *)(v2 + 16), a2) )
        return 1;
    }
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6 = sub_CEE10;
  result = 0;
  v10 = a2;
  if ( v2 )
  {
LABEL_17:
    sub_CDCD0((__int64)&v5, v2);
    return v9;
  }
  return result;
}
