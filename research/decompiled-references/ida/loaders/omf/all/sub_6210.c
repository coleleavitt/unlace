unsigned __int64 __fastcall sub_6210(__int16 *a1)
{
  bool v1; // zf
  unsigned __int16 v3; // ax
  __int64 v4; // rsi
  int v5; // eax
  int v7; // ebp
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  const char *v11; // rax
  int v12; // esi
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  char v16; // al
  unsigned __int64 v17; // rdi
  __int64 v18; // r12
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD v22[7]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v1 = *((_BYTE *)a1 + 66) == 0;
  v23 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v14 = qword_14420;
    if ( (unsigned __int64)qword_14420 > 0x1FFF )
    {
      if ( (unsigned __int64)qword_14420 <= 0x3FFF )
      {
        v20 = netnode_altval(qword_144C8, qword_14420 - 0x2000, 65);
        netnode_supval(qword_144C8, v20, v22, 52, 83);
        v14 = v22[1];
      }
      else
      {
        v15 = qword_14420 - 0x4000;
        if ( qword_14420 == 0x4000 || v15 >= (unsigned __int64)xmmword_14508 )
          goto LABEL_57;
        v14 = *(_QWORD *)(qword_14500 + 59 * v15 + 48);
      }
    }
    v16 = *((_BYTE *)a1 + 65);
    switch ( v16 )
    {
      case 1:
        if ( netnode_altval(qword_14520, -2, *((unsigned __int8 *)a1 + 56)) )
        {
          v21 = netnode_altval(qword_14520, 0, *((unsigned __int8 *)a1 + 56));
          sub_4460(v14, v21);
        }
        break;
      case 2:
        v17 = *((_QWORD *)a1 + 7);
        if ( !v17 || v17 >= (unsigned __int64)xmmword_14508 )
          goto LABEL_57;
        v18 = qword_14500 + 59 * v17;
        v19 = *(_QWORD *)(v18 + 48);
        if ( !v19 )
        {
          v19 = (unsigned __int16)v14;
          if ( sub_5380(v17) != -1 )
            v19 = (unsigned __int16)sub_54D0(a1[28]);
          *(_QWORD *)(v18 + 48) = v19;
        }
        *(_BYTE *)(v18 + 57) = 1;
        sub_4460(v14, v19);
        break;
      case 0:
        sub_4460(v14, *((_QWORD *)a1 + 7));
        break;
    }
  }
  if ( qword_14400 == -1 )
    sub_52E0("fixup_code");
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 5) + qword_14400;
  if ( (unsigned __int16)*a1 > 5u )
  {
    if ( v3 == 6 || v3 == 13 )
    {
      v5 = (unsigned __int8)sub_5EE0((__int64)&qword_143C0, v4);
LABEL_7:
      if ( *((_BYTE *)a1 + 65) != 2 )
        return v23 - __readfsqword(0x28u);
LABEL_10:
      v7 = v5;
      if ( !*((_QWORD *)a1 + 4) && !v5 )
        return v23 - __readfsqword(0x28u);
      goto LABEL_12;
    }
  }
  else
  {
    if ( v3 > 3u )
    {
      sub_5890((__int64)&qword_143C0, v4, 4);
      v5 = *(_DWORD *)(qword_143C0 + qword_143F0);
      v1 = *((_BYTE *)a1 + 65) == 2;
      qword_143F0 += 4;
      if ( !v1 )
        return v23 - __readfsqword(0x28u);
      goto LABEL_10;
    }
    if ( (unsigned __int16)(v3 - 1) <= 2u )
    {
      sub_5890((__int64)&qword_143C0, v4, 2);
      v5 = *(unsigned __int16 *)(qword_143C0 + qword_143F0);
      qword_143F0 += 2;
      goto LABEL_7;
    }
  }
  if ( *((_BYTE *)a1 + 65) != 2 || !*((_QWORD *)a1 + 4) )
    return v23 - __readfsqword(0x28u);
  v7 = 0;
LABEL_12:
  if ( (unsigned __int8)sub_5300(a1[28]) )
    return v23 - __readfsqword(0x28u);
  v8 = *((_QWORD *)a1 + 7);
  if ( !v8 || v8 >= (unsigned __int64)xmmword_14508 )
LABEL_57:
    sub_52E0("get_omf_extdef");
  v9 = *((_QWORD *)a1 + 4);
  v10 = qword_14500 + 59 * v8;
  if ( v9 > 0xFFFF )
  {
    *((_QWORD *)a1 + 4) = "%s: the input file is bad (file position %08llX)";
    v9 = (__int64)"%s: the input file is bad (file position %08llX)";
  }
  else if ( v9 < -65535 )
  {
    *((_QWORD *)a1 + 4) = -65536;
    v9 = -65536;
  }
  LODWORD(v11) = -65536;
  if ( v7 >= -65536 )
    LODWORD(v11) = v7;
  if ( (int)v11 > (int)"%s: the input file is bad (file position %08llX)" )
    v11 = "%s: the input file is bad (file position %08llX)";
  v12 = *(_DWORD *)(v10 + 32);
  if ( v12 > v9 )
  {
    *(_DWORD *)(v10 + 32) = v9;
    v12 = v9;
    v9 = *((_QWORD *)a1 + 4);
  }
  v13 = *(int *)(v10 + 36);
  if ( v13 < v9 )
  {
    *(_DWORD *)(v10 + 36) = v9;
    LODWORD(v13) = v9;
  }
  if ( (int)v11 > (int)v13 )
    *(_DWORD *)(v10 + 36) = (_DWORD)v11;
  if ( (int)v11 < v12 )
    *(_DWORD *)(v10 + 32) = (_DWORD)v11;
  return v23 - __readfsqword(0x28u);
}

