__int64 __fastcall sub_57470(__int64 a1, int *a2, double a3)
{
  char v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // cf
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // al
  unsigned __int64 v13; // r12
  unsigned __int8 byte; // al
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD v17[5]; // [rsp+0h] [rbp-28h] BYREF

  v17[1] = __readfsqword(0x28u);
  v3 = getinf();
  v4 = -261;
  v5 = v3 & 0xF;
  v6 = _bittest64(&v4, v5);
  *(_BYTE *)(a1 + 5489) = v5;
  if ( v6 )
    return 0;
  v8 = *a2;
  if ( (unsigned int)*a2 > 0x2F )
  {
    v9 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v9 + 1;
  }
  else
  {
    v9 = (unsigned __int64 *)(*((_QWORD *)a2 + 2) + v8);
    *a2 = v8 + 8;
  }
  v10 = *v9;
  v11 = getseg();
  if ( !v11 )
    return 0;
  if ( !*(_BYTE *)(v11 + 43) )
    return 0;
  v12 = *(_BYTE *)(v11 + 184);
  if ( v12 )
  {
    if ( (unsigned __int8)(v12 - 2) > 1u )
      return 0;
  }
  if ( *(_QWORD *)(a1 + 5496) != -1 )
  {
    if ( (unsigned __int8)netnode_charval() )
      return 0;
    *(_BYTE *)(a1 + 5488) = 0;
    if ( (unsigned __int8)sub_535A0(a1, v10, 1, 0, a3) || (unsigned __int8)sub_55F90(a1, v10, 1, 0) )
      return *(unsigned int *)(a1 + 5480);
    netnode_supdel();
  }
  result = sub_52F60(a1, v10);
  if ( !result )
  {
    v13 = *(_QWORD *)(getseg() + 8) - v10;
    if ( (unsigned int)getinf() == 4 )
    {
      v16 = sub_50FF0(v10, v13, 1);
      if ( v16 > 4 )
      {
LABEL_23:
        sub_519A0(v10, v16, 0);
        if ( (unsigned __int8)create_strlit() )
          return (unsigned int)v16;
      }
    }
    else
    {
      byte = get_byte();
      v15 = byte;
      if ( byte > 2u && byte < v13 )
      {
        v17[0] = v10;
        if ( (unsigned __int8)sub_510F0(v17, 0) )
        {
          v16 = v15 + 1;
          goto LABEL_23;
        }
      }
    }
    return 0;
  }
  return result;
}
