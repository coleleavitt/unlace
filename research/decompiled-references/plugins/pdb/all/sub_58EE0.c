_QWORD *__fastcall sub_58EE0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // r15
  int v10; // eax
  bool v11; // cc
  unsigned __int64 v12; // r13
  _QWORD *v13; // r12
  _QWORD *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rax
  int v22; // edx
  __int64 v23; // [rsp+8h] [rbp-50h]
  char v24; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x20u);
  *v2 = 0;
  v3 = v2;
  v4 = *(const char **)a2;
  if ( !*(_QWORD *)a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v5 = strlen(*(const char **)a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = std::string::_Rep::_S_create(v5, 0, &v24);
    v8 = v7;
    v9 = (char *)(v7 + 24);
    if ( v6 == 1 )
    {
      *(_BYTE *)(v7 + 24) = *v4;
    }
    else
    {
      v23 = v7;
      memcpy((void *)(v7 + 24), v4, v6);
      v8 = v23;
    }
    if ( (_UNKNOWN *)v8 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)v8 = v6;
      *(_BYTE *)(v8 + v6 + 24) = 0;
    }
  }
  else
  {
    v9 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  v10 = *(_DWORD *)(a2 + 8);
  v11 = (unsigned __int64)a1[3] <= 0x14;
  v3[1] = v9;
  *((_DWORD *)v3 + 4) = v10;
  v12 = *((_QWORD *)v9 - 3);
  if ( v11 )
  {
    v13 = (_QWORD *)a1[2];
    if ( !v13 )
    {
LABEL_23:
      v17 = std::_Hash_bytes(v9, v12, 0xC70F6907);
      v18 = v17 % a1[1];
      return sub_58D20((__int64)a1, v18, v17, v3, 1u);
    }
LABEL_11:
    while ( 1 )
    {
      v14 = (_QWORD *)v13[1];
      if ( v12 == *(v14 - 3) )
        break;
      v13 = (_QWORD *)*v13;
      if ( !v13 )
        goto LABEL_23;
    }
    if ( v12 )
    {
      while ( memcmp(v9, v14, v12) )
      {
        v13 = (_QWORD *)*v13;
        if ( !v13 )
          goto LABEL_23;
        v14 = (_QWORD *)v13[1];
        if ( *(v14 - 3) != v12 )
        {
          v13 = (_QWORD *)*v13;
          if ( v13 )
            goto LABEL_11;
          goto LABEL_23;
        }
      }
    }
  }
  else
  {
    v19 = std::_Hash_bytes(v9, *((_QWORD *)v9 - 3), 0xC70F6907);
    v20 = a1[1];
    v17 = v19;
    v18 = v19 % v20;
    v21 = sub_552B0(*a1, v20, v19 % v20, (_QWORD *)v3[1], v19);
    if ( !v21 )
      return sub_58D20((__int64)a1, v18, v17, v3, 1u);
    v13 = (_QWORD *)*v21;
    if ( !*v21 )
      return sub_58D20((__int64)a1, v18, v17, v3, 1u);
  }
  if ( v3 )
  {
    v15 = v3[1];
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
      }
      else
      {
        v22 = *(_DWORD *)(v15 - 8);
        *(_DWORD *)(v15 - 8) = v22 - 1;
      }
      if ( v22 <= 0 )
        std::string::_Rep::_M_destroy(v15 - 24, &v24);
    }
    operator delete(v3, 0x20u);
  }
  return v13;
}
