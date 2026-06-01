__int64 __fastcall sub_3AE5F0(__int64 *a1, unsigned __int64 a2)
{
  int v2; // eax
  int v3; // r13d
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-40h] BYREF
  char v12; // [rsp+20h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v12 = 0;
  v10 = 0;
  v11 = 0;
  if ( v2 == 61 )
  {
    if ( (unsigned __int8)is_enum() && (get_tinfo_property() & 0x3F) == 0x2D )
    {
      copy_tinfo_t();
      v7 = *(_QWORD *)(a2 + 24);
      v8 = -1;
      v9 = 8 * *(char *)(v7 + 15);
      if ( (unsigned __int64)v9 <= 0x3F )
        v8 = (1LL << v9) - 1;
      v3 = 0;
      v10 = *(_QWORD *)v7 & v8;
      goto LABEL_15;
    }
    v2 = *(_DWORD *)(a2 + 8);
  }
  if ( (unsigned int)(v2 - 59) <= 1 )
  {
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v10 = *(unsigned int *)(a2 + 32);
    v3 = sub_3A5B70(a1 + 2, a2, 0);
    sub_3A32F0(&v11);
    sub_3ADE20(a1, a2, (__int64)&v10, v3, nullptr);
    if ( (*(_BYTE *)(a2 + 57) & 1) != 0 )
      sub_3AE3E0(a1, a2, (__int64)&v10, v3);
  }
  else
  {
    v3 = 4;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[2] + 8 * a1[3] - 8) + 8LL) - 59) > 1 )
  {
    v4 = (unsigned int)(*(_DWORD *)(a2 + 8) - 48);
    if ( (unsigned int)v4 <= 0x15 )
    {
      v5 = 2300417;
      if ( _bittest64(&v5, v4) )
      {
        if ( (unsigned __int8)sub_3A36D0(&v10, a2 + 48) )
        {
          if ( v3 == 4 )
            v3 = sub_3A5B70(a1 + 2, a2, 1);
LABEL_15:
          sub_3A32F0(&v11);
          sub_3ADE20(a1, a2, (__int64)&v10, v3, nullptr);
        }
      }
    }
  }
  clear_tinfo_t();
  return 0;
}

