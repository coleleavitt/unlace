__int64 __fastcall sub_39E90(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rsi
  unsigned __int8 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  unsigned int v9; // ebx
  unsigned __int64 v11; // rdx
  const char *v12; // r14
  const char *v13; // r13
  const char *v14; // rax
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    v12 = (const char *)dstr_tinfo();
    v13 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v14 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    sub_111A0((__int64)"DEXSIP: Read value from %s`%s tif=%s\n", v14, v13, v12);
  }
  v3 = &byte_5;
  tinfo_property = get_tinfo_property();
  if ( get_tinfo_property() )
  {
    clear_tinfo_t();
    v3 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 5);
    sub_387A0((const char *)&tinfo_property, v3, 1, 0);
  }
  v4 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 24LL))(v2, v3);
  v8 = *v4;
  if ( (char)v8 <= 74 )
  {
    if ( (char)v8 > 65 )
    {
      switch ( (char)v8 )
      {
        case 'B':
          goto LABEL_18;
        case 'C':
          goto LABEL_17;
        case 'D':
        case 'J':
          goto LABEL_8;
        case 'F':
        case 'I':
          *a1 = *((_DWORD *)v4 + 2);
          goto LABEL_9;
        default:
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  v11 = (unsigned int)(v8 - 76);
  if ( (unsigned __int8)v11 > 0x28u )
  {
LABEL_16:
    v9 = 0;
    goto LABEL_10;
  }
  v5 = 0x18108808001LL;
  if ( _bittest64(&v5, v11) )
  {
LABEL_8:
    *(_QWORD *)a1 = *((_QWORD *)v4 + 1);
  }
  else if ( (_BYTE)v11 == 14 )
  {
LABEL_18:
    *(_BYTE *)a1 = v4[8];
  }
  else
  {
    if ( (_BYTE)v11 != 7 )
      goto LABEL_16;
LABEL_17:
    *(_WORD *)a1 = *((_WORD *)v4 + 4);
  }
LABEL_9:
  callui(27, v3, &callui, v5, v6, v7, tinfo_property, v16, v17, v18);
  v9 = 1;
LABEL_10:
  clear_tinfo_t();
  return v9;
}

