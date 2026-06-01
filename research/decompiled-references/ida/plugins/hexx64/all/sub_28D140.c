__int64 __fastcall sub_28D140(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char *v3; // r12
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 tinfo_property; // [rsp+0h] [rbp-50h]
  char *s1; // [rsp+8h] [rbp-48h] BYREF
  __int128 v23; // [rsp+10h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  s1 = nullptr;
  v2 = sub_254DF0(*(_QWORD *)(a2 + 24), (__int64 *)&s1, 0, 0);
  v3 = s1;
  v4 = v2;
  if ( (_BYTE)v2 )
  {
    if ( !(_QWORD)v23
      || strcmp(s1, "memcpy") && strcmp(v3, "memset")
      || (v6 = *(_QWORD **)(a2 + 32), v6[1] != 3)
      || (v7 = *v6, *(_DWORD *)(*v6 + 152LL) != 61) )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v8 = sub_255A30(*(__int64 **)(v7 + 168));
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
      v13 = *(_QWORD *)(v10 + 24);
      v14 = *(_QWORD *)(v13 + 48);
      if ( get_tinfo_size() != v8 )
        goto LABEL_19;
      v17 = j__qalloc_or_throw(64, v14, v15, v16);
      *(_QWORD *)v17 = -1;
      v18 = v17;
      *(_DWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 12) = -1;
      *(_QWORD *)(v17 + 48) = 0;
      *(_DWORD *)(v17 + 56) = 0;
      sub_25AFF0(v17, v13, 0.0);
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
      v18 = j__qalloc_or_throw(64, tinfo_property, v11, v12);
      *(_QWORD *)v18 = -1;
      *(_OWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 12) = -1;
      *(_QWORD *)(v18 + 40) = 0;
      *(_DWORD *)(v18 + 56) = 0;
      *(_DWORD *)(v18 + 8) = 69;
      *(_QWORD *)(v18 + 48) = tinfo_property;
      clear_tinfo_t();
    }
    v19 = *(_QWORD *)(v7 + 168);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      if ( v20 )
      {
        *(_QWORD *)(v19 + 24) = 0;
        qfree(v20);
      }
      j__qfree(v19);
    }
    *(_QWORD *)(v7 + 168) = v18;
    *(_DWORD *)(v7 + 152) = 67;
    *(_DWORD *)(v18 + 56) |= 1u;
    v3 = s1;
  }
LABEL_4:
  if ( v3 )
  {
    *(_QWORD *)&v23 = 0;
    qfree((__int64)v3);
  }
  return v4;
}

