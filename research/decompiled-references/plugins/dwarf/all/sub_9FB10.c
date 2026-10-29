__int64 __fastcall sub_9FB10(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  _DWORD *v8; // rbx
  bool v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // rax
  unsigned int v17; // ebp
  void (__fastcall *v19)(_QWORD *); // rdx
  void (__fastcall *v20)(_QWORD *); // rax
  _QWORD *v21; // r13
  __int64 v22; // r12
  void *v23; // rdi
  __int64 v24; // r12
  _QWORD *v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  char *v32; // rax
  unsigned int v33; // eax
  unsigned __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  __int64 v35; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v36[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a3[28];
  v36[1] = __readfsqword(0x28u);
  if ( v3 == -1 || (v3 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  v4 = a1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a3;
  if ( *(_QWORD *)(v5 + 344) && !rangeset_t_find_range(v5 + 336) )
    return 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(v6[32] + 48LL))(*(_QWORD *)(*v6 + 24LL));
  v8 = (_DWORD *)v6[27];
  if ( v8 )
    ++v8[2];
  v9 = v7 != 0;
  if ( (v8[47] & 8) == 0 )
    goto LABEL_33;
  v10 = *(_QWORD *)(v4 + 24);
  v11 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 88LL);
  v36[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, _QWORD *))(v11 + 64))(v10, &v34, v36) )
  {
    v12 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 88LL) + 464LL))(v36[0]);
    sub_1D740((__int64)"ERROR: %s\n", v12);
  }
  if ( !(unsigned __int8)sub_84E40((__int64)v8, &v35, v34) )
  {
LABEL_33:
    v29 = *(_QWORD *)(v4 + 16);
    v30 = *a2;
    v36[0] = 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, __int64, _QWORD *))(*(_QWORD *)(v29 + 88) + 24LL))(
            *(_QWORD *)(v29 + 160),
            *(_QWORD *)(v4 + 24),
            v9,
            v30 + 24,
            v36);
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        v32 = sub_81BA0(v4);
        sub_943B0((_BYTE *)(*(_QWORD *)(v4 + 16) + 328LL), (__int64)"Failed to load sibling for DIE %s\n", v32);
      }
      goto LABEL_16;
    }
    goto LABEL_38;
  }
  if ( v35 )
  {
    v13 = *(_QWORD *)(v4 + 16);
    v14 = *a2;
    v36[0] = 0;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, bool, __int64, _QWORD *))(*(_QWORD *)(v13 + 88) + 40LL))(
            *(_QWORD *)(v13 + 160),
            v35,
            v9,
            v14 + 24,
            v36);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v16 = sub_81BA0(v4);
        sub_943B0((_BYTE *)(*(_QWORD *)(v4 + 16) + 328LL), (__int64)"Failed to load offdie for DIE %s\n", v16);
      }
      goto LABEL_16;
    }
LABEL_38:
    *(_QWORD *)(*a2 + 16) = *(_QWORD *)(v4 + 16);
    LOBYTE(v33) = sub_98B70(a2);
    v17 = v33;
    goto LABEL_17;
  }
LABEL_16:
  v17 = 0;
LABEL_17:
  if ( v8 )
  {
    if ( v8[2]-- == 1 )
    {
      v19 = **(void (__fastcall ***)(_QWORD *))v8;
      if ( v19 == sub_15E30 )
      {
        v20 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v8 + 16LL);
        if ( v20 == sub_15D70 )
        {
          v21 = *((_QWORD **)v8 + 16);
          *(_QWORD *)v8 = &off_C71D8;
          if ( v21 )
          {
            v22 = v21[2];
            while ( v22 )
            {
              sub_80300(*(_QWORD **)(v22 + 24));
              v23 = (void *)v22;
              v22 = *(_QWORD *)(v22 + 16);
              operator delete(v23, 0x30u);
            }
            operator delete(v21, 0x30u);
          }
          v24 = *((_QWORD *)v8 + 19);
          while ( v24 )
          {
            v25 = (_QWORD *)v24;
            sub_80A30(*(_QWORD **)(v24 + 24));
            v26 = *(_QWORD *)(v24 + 32);
            v24 = *(_QWORD *)(v24 + 16);
            if ( v26 )
            {
              v25[5] = 0;
              qfree(v26);
            }
            operator delete(v25, 0x48u);
          }
          v27 = *((_QWORD *)v8 + 12);
          if ( v27 )
          {
            *((_QWORD *)v8 + 13) = 0;
            qfree(v27);
          }
          operator delete(v8, 0xC0u);
        }
        else
        {
          v20(v8);
        }
      }
      else
      {
        v19(v8);
      }
    }
  }
  return v17;
}
