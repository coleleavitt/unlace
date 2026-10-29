__int64 __fastcall sub_5BB80(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r15
  __int64 v4; // r12
  __int64 *v5; // rbx
  size_t v6; // rbp
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax
  void (*v10)(void); // rax
  unsigned __int64 v12; // rax
  __int64 **v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 **v17; // rax
  int v18; // eax
  char v19; // [rsp+Fh] [rbp-49h] BYREF
  void *v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 608);
  v20[1] = (void *)__readfsqword(0x28u);
  v2 = std::string::_Rep::_S_create(6, 0, &v19);
  v3 = (_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = 1296125487;
  v4 = v2;
  *(_WORD *)(v2 + 28) = 21317;
  if ( (unsigned __int64 *)v2 == std::string::_Rep::_S_empty_rep_storage )
  {
    if ( v1[4] > 0x14u )
    {
      v12 = std::_Hash_bytes((const void *)(v2 + 24), *(_QWORD *)v2, 0xC70F6907);
      v13 = (__int64 **)sub_552B0(v1[1], v1[2], v12 % v1[2], v3, v12);
      if ( !v13 )
        goto LABEL_13;
      v5 = *v13;
      goto LABEL_30;
    }
    v5 = (__int64 *)v1[3];
    if ( v5 )
      goto LABEL_4;
LABEL_13:
    if ( (*(_DWORD *)debug & 0x400000) != 0 )
      sub_29350();
    return 1;
  }
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = 6;
  *(_BYTE *)(v2 + 30) = 0;
  if ( v1[4] <= 0x14u )
  {
    v5 = (__int64 *)v1[3];
    if ( v5 )
    {
LABEL_4:
      v6 = *(_QWORD *)v2;
LABEL_6:
      while ( 1 )
      {
        v7 = (_QWORD *)v5[1];
        if ( v6 == *(v7 - 3) )
          break;
        v5 = (__int64 *)*v5;
        if ( !v5 )
        {
LABEL_12:
          if ( (unsigned __int64 *)v4 != std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_38;
          goto LABEL_13;
        }
      }
      if ( v6 )
      {
        while ( memcmp(v3, v7, v6) )
        {
          v5 = (__int64 *)*v5;
          if ( !v5 )
            goto LABEL_12;
          v7 = (_QWORD *)v5[1];
          if ( v6 != *(v7 - 3) )
          {
            v5 = (__int64 *)*v5;
            if ( v5 )
              goto LABEL_6;
            goto LABEL_12;
          }
        }
      }
      if ( (unsigned __int64 *)v4 == std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_17;
      if ( &_pthread_key_create )
        goto LABEL_42;
      v15 = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(v4 + 16) = v15 - 1;
      if ( v15 > 0 )
        goto LABEL_17;
      goto LABEL_44;
    }
    goto LABEL_38;
  }
  v16 = std::_Hash_bytes((const void *)(v2 + 24), 6u, 0xC70F6907);
  v17 = (__int64 **)sub_552B0(v1[1], v1[2], v16 % v1[2], v3, v16);
  if ( !v17 )
  {
LABEL_38:
    if ( !&_pthread_key_create )
    {
      v18 = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(v4 + 16) = v18 - 1;
      if ( v18 <= 0 )
        std::string::_Rep::_M_destroy(v4, v20);
      goto LABEL_13;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) > 0 )
      goto LABEL_13;
    v5 = nullptr;
LABEL_44:
    std::string::_Rep::_M_destroy(v4, v20);
    goto LABEL_30;
  }
  v5 = *v17;
  if ( &_pthread_key_create )
  {
LABEL_42:
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF);
  }
  else
  {
    v14 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 16) = v14 - 1;
  }
  if ( v14 <= 0 )
    goto LABEL_44;
LABEL_30:
  if ( !v5 )
    goto LABEL_13;
LABEL_17:
  if ( *((_DWORD *)v5 + 4) == -1 )
    goto LABEL_13;
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 608) + 24LL))(v20);
  if ( !v20[0] )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
      return 1;
    goto LABEL_27;
  }
  if ( !(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v20[0] + 24LL))(v20[0]) )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
      goto LABEL_21;
LABEL_27:
    sub_29350();
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v20[0] + 24LL))(v20[0]);
  v8 = sub_5B6C0(a1, a1 + 80, (__int64 **)v20, v9);
  if ( (_BYTE)v8 )
  {
LABEL_21:
    v8 = 1;
    goto LABEL_22;
  }
  sub_57C20(a1 + 80);
LABEL_22:
  if ( v20[0] )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v20[0] + 8LL);
    if ( (char *)v10 == (char *)sub_54910 )
      operator delete(v20[0], 0x40u);
    else
      v10();
  }
  return v8;
}
