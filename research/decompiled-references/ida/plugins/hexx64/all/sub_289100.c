__int64 __fastcall sub_289100(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  const char *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rbp
  int v12; // esi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+8h] [rbp-70h]
  _QWORD v19[13]; // [rsp+10h] [rbp-68h] BYREF

  v19[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 73 || *(_DWORD *)(a2 + 12) == -1 )
  {
    return 0;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0;
    if ( !*(_QWORD *)(v4 + 72) && *(_DWORD *)(v4 + 8) == 57 )
    {
      v6 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v6 + 8) == 68 )
      {
        v7 = *(const char **)(v6 + 24);
        if ( !strcmp(v7, "__eh34_catch") || !strcmp(v7, "__eh34_unwind") )
        {
          sub_283C00(&v17, a1, a2, a3);
          v10 = v17;
          v11 = *v18;
          if ( v17 == *v18 )
          {
            v19[0] = -1;
            v19[1] = -4294967226LL;
            v19[2] = 0xFFFFFFFFLL;
            v19[3] = 0;
            v14 = qalloc_or_throw(48, (__int64)a1, v8, v9);
            *(_QWORD *)(v14 + 16) = -1;
            v15 = v14;
            *(_DWORD *)(v14 + 24) = 70;
            *(_QWORD *)(v14 + 28) = -1;
            sub_25AA70(v14 + 16, (__int64)v19, a3);
            *(_QWORD *)v15 = v11;
            v16 = *(__int64 **)(v11 + 8);
            *(_QWORD *)(v15 + 8) = v16;
            *v16 = v15;
            *(_QWORD *)(v11 + 8) = v15;
            v11 = v15;
            ++*(_QWORD *)(v10 + 16);
            sub_255050((__int64)v19, a3);
            *(_DWORD *)(v15 + 24) = 70;
          }
          v12 = *(_DWORD *)(v11 + 28);
          if ( v12 != -1 )
            sub_27FF50(a1[8], v12, *(_DWORD *)(a2 + 12));
          *(_DWORD *)(v11 + 28) = *(_DWORD *)(a2 + 12);
          v5 = 1;
          *(_DWORD *)(a2 + 12) = -1;
        }
      }
    }
  }
  return v5;
}

