__int64 __fastcall sub_28D500(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char *v3; // r12
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 tinfo_property; // [rsp+0h] [rbp-50h]
  char *s1; // [rsp+8h] [rbp-48h] BYREF
  __int128 v17; // [rsp+10h] [rbp-40h]
  unsigned __int64 v18; // [rsp+20h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  s1 = nullptr;
  v2 = sub_2551B0(*(_QWORD *)(a2 + 24), (__int64 *)&s1, 0, 0);
  v3 = s1;
  v4 = v2;
  if ( (_BYTE)v2 )
  {
    if ( !(_QWORD)v17
      || strcmp(s1, "memcpy") && strcmp(v3, "memset")
      || (v6 = *(_QWORD **)(a2 + 32), v6[1] != 3)
      || (v7 = *v6, *(_DWORD *)(*v6 + 152LL) != 61) )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v8 = sub_255DF0(*(__int64 **)(v7 + 168));
    if ( v8 == -1 )
      goto LABEL_19;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = v7;
    if ( v9 == 48 )
    {
      v10 = *(_QWORD *)(v7 + 24);
      v9 = *(_DWORD *)(v10 + 8);
    }
    if ( v9 == 52 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( get_tinfo_size() != v8 )
        goto LABEL_19;
      v12 = j__qalloc_or_throw();
      *(_QWORD *)v12 = -1;
      v13 = v12;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_25B3B0(v12, v11);
    }
    else
    {
      tinfo_property = get_tinfo_property();
      if ( !(_BYTE)tinfo_property || (unsigned int)verify_tinfo() || get_tinfo_size() != v8 )
      {
        clear_tinfo_t();
LABEL_19:
        v3 = s1;
        v4 = 0;
        goto LABEL_4;
      }
      v13 = j__qalloc_or_throw();
      *(_QWORD *)v13 = -1;
      *(_OWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 12) = -1;
      *(_QWORD *)(v13 + 40) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(_DWORD *)(v13 + 8) = 69;
      *(_QWORD *)(v13 + 48) = tinfo_property;
      clear_tinfo_t();
    }
    v14 = *(_QWORD *)(v7 + 168);
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 16) )
      {
        *(_QWORD *)(v14 + 24) = 0;
        qfree();
      }
      j__qfree();
    }
    *(_QWORD *)(v7 + 168) = v13;
    *(_DWORD *)(v7 + 152) = 67;
    *(_DWORD *)(v13 + 56) |= 1u;
    v3 = s1;
  }
LABEL_4:
  if ( v3 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v4;
}

