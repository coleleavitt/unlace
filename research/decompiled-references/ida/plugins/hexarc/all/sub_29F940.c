__int64 __fastcall sub_29F940(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  char v4; // r13
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // eax
  char v11; // al
  unsigned __int64 v12; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 tinfo_property; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a2[4] + 32) & 3) != 0 )
    return v17 - __readfsqword(0x28u);
  v3 = a2[3];
  v4 = 0;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 > 0x3C )
  {
    if ( v8 == 65 )
    {
      v9 = a2[3];
      goto LABEL_20;
    }
  }
  else
  {
    if ( v8 > 0x3A )
    {
      if ( (unsigned __int8)sub_293020(*a1, v3 + 48, a3, 0) )
      {
        copy_tinfo_t();
        copy_tinfo_t();
        if ( *(_DWORD *)(v3 + 8) == 60 )
        {
          tinfo_property = get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !under_debugger )
            sub_37B760(50473);
          BUG();
        }
        clear_tinfo_t();
      }
      return v17 - __readfsqword(0x28u);
    }
    if ( v8 == 51 )
    {
      v9 = a2[3];
      do
      {
        v9 = *(_QWORD *)(v9 + 24);
        v10 = *(_DWORD *)(v9 + 8);
      }
      while ( v10 == 51 );
      if ( v10 == 48 )
      {
        v4 = 1;
        goto LABEL_28;
      }
      if ( (unsigned int)(v10 - 35) <= 1 && *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) == 48 )
      {
        v11 = get_tinfo_property();
        if ( (v11 & 0x3E) != 0 && (v11 & 0xFu) <= 8 )
        {
          v12 = a2[3];
          if ( *(_DWORD *)(v9 + 8) != 65 )
          {
            v4 = 1;
LABEL_28:
            copy_tinfo_t();
            v15 = *a2;
            if ( *a2 == -1 )
              goto LABEL_31;
            if ( *(_DWORD *)(v3 + 8) == 51 )
            {
              sub_29F670((__int64)a1, v15, v3 + 48, v4);
LABEL_31:
              while ( *(_DWORD *)(v3 + 8) == 51 )
              {
                sub_325010(&tinfo_property, *(_QWORD *)(*a1 + 112), v3 + 48);
                copy_tinfo_t();
                clear_tinfo_t();
                v3 = *(_QWORD *)(v3 + 24);
              }
            }
            return v17 - __readfsqword(0x28u);
          }
          v14 = *a1;
LABEL_23:
          if ( !(unsigned __int8)sub_293020(v14, v12 + 48, a3, 0) )
            return v17 - __readfsqword(0x28u);
          goto LABEL_28;
        }
      }
LABEL_20:
      if ( *(_DWORD *)(v9 + 8) != 65
        || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32) + 24) & 2) != 0 )
      {
        return v17 - __readfsqword(0x28u);
      }
      v14 = *a1;
      v12 = a2[3];
      goto LABEL_23;
    }
  }
  if ( !(unsigned __int8)sub_293020(*a1, v3 + 48, a3, 0) )
    return v17 - __readfsqword(0x28u);
  return copy_tinfo_t();
}

