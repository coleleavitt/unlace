__int64 __fastcall sub_16760(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rdx
  char *v9; // r12
  char v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // [rsp+7h] [rbp-49h] BYREF
  char *s1; // [rsp+8h] [rbp-48h] BYREF
  __int128 v25; // [rsp+10h] [rbp-40h]
  unsigned __int64 v26; // [rsp+20h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 16);
  v26 = __readfsqword(0x28u);
  v25 = 0;
  s1 = nullptr;
  sub_82D80((unsigned int)&s1, a2, v7, a4, a5, a6);
  v9 = s1;
  if ( (_QWORD)v25 )
  {
    if ( !strcmp(s1, ".debug_info") )
    {
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_4;
    }
    if ( !strcmp(v9, ".note.gnu.build-id") && (v16 = *(_DWORD *)(a2 + 16), v16 <= 0xFFFF) )
    {
      v17 = *(_QWORD *)(a1 + 40);
      v18 = v16;
      if ( v17 < v16 )
      {
        v21 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v16 )
        {
          v22 = qvector_reserve(a1 + 32, v21, v16, 1);
          *(_QWORD *)(a1 + 32) = v22;
          v17 = *(_QWORD *)(a1 + 40);
          v21 = v22;
        }
        memset((void *)(v21 + v17), 0, v18 - v17);
        *(_QWORD *)(a1 + 40) = v18;
      }
      else if ( v16 != v17 )
      {
        *(_QWORD *)(a1 + 40) = v16;
      }
      qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      if ( *(_DWORD *)(a2 + 16) != qlread(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 16)) )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          qfree(v20);
          *(_QWORD *)(a1 + 32) = 0;
          v9 = s1;
          *(_QWORD *)(a1 + 48) = 0;
          goto LABEL_4;
        }
      }
    }
    else
    {
      if ( strcmp(v9, ".gnu_debuglink") )
        goto LABEL_4;
      qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      while ( qlread(*(_QWORD *)(a1 + 8), &v23, 1) == 1 )
      {
        v11 = v23;
        if ( !v23 )
          goto LABEL_22;
        v12 = *(_QWORD *)(a1 + 64);
        v13 = 2;
        if ( v12 )
          v13 = v12-- + 1;
        v14 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < v13 )
        {
          v15 = qvector_reserve(a1 + 56, v14, v13, 1);
          *(_QWORD *)(a1 + 56) = v15;
          v14 = v15;
        }
        *(_QWORD *)(a1 + 64) = v13;
        *(_BYTE *)(v14 + v12) = v11;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + v12 + 1) = 0;
      }
      v19 = *(_QWORD *)(a1 + 56);
      if ( v19 )
      {
        *(_QWORD *)(a1 + 64) = 0;
        qfree(v19);
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 72) = 0;
      }
    }
LABEL_22:
    v9 = s1;
  }
LABEL_4:
  if ( v9 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v9);
  }
  return 0;
}

