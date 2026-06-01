unsigned __int64 __fastcall sub_421D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  const char *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  char *v15; // rbx
  _DWORD *v16; // rsi
  int v17; // eax
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r15
  char *v23; // rbx
  _DWORD *v24; // rsi
  int v25; // eax
  char v26; // al
  const char *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // [rsp+10h] [rbp-58h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a5 )
    return v31 - __readfsqword(0x28u);
  if ( *(_QWORD *)(a4 + 8) )
  {
    v10 = *(const char **)a4;
    if ( !strcmp(*(const char **)a4, "__TEXT") )
    {
      v30 = (char *)qvector_reserve();
      strcpy(v30, "HEADER");
      if ( a2 != a3 )
      {
        if ( !*(_QWORD *)(a4 + 8)
          || (v27 = *(const char **)a4, strcmp(*(const char **)a4, "__DWARF")) && strcmp(v27, "__LINKEDIT") )
        {
          v11 = *(__int64 **)(a1 + 88);
          v12 = v11[1];
          v13 = *v11;
          if ( v11[2] < (unsigned __int64)(v12 + 1) )
          {
            v13 = qvector_reserve();
            *v11 = v13;
            v12 = v11[1];
          }
          v14 = v13 + 80 * v12;
          *(_WORD *)(v14 + 72) = 0;
          *(_OWORD *)v14 = 0;
          *(_QWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v14 + 40) = 0;
          *(_QWORD *)(v14 + 64) = 0;
          *(_OWORD *)(v14 + 24) = 0;
          *(_OWORD *)(v14 + 48) = 0;
          ++v11[1];
          sub_15ED0((__int64 *)(v14 + 16));
          v15 = "CODE";
          *(_QWORD *)v14 = a2;
          v16 = *(_DWORD **)(v14 + 40);
          *(_QWORD *)(v14 + 8) = a3;
          if ( !a6 )
            v15 = "DATA";
          if ( *(_QWORD *)(v14 + 56) <= 4u )
          {
            v29 = qvector_reserve();
            *(_QWORD *)(v14 + 40) = v29;
            v16 = (_DWORD *)v29;
          }
          v17 = *(_DWORD *)v15;
          *(_QWORD *)(v14 + 48) = 5;
          *v16 = v17;
          *(_BYTE *)(*(_QWORD *)(v14 + 40) + 4LL) = 0;
          *(_BYTE *)(v14 + 72) = getinf_flag() + 1;
          *(_BYTE *)(v14 + 73) = a6 + 4;
        }
      }
      if ( v30 )
        qfree();
      return v31 - __readfsqword(0x28u);
    }
    if ( a2 == a3 || !strcmp(v10, "__DWARF") )
      return v31 - __readfsqword(0x28u);
  }
  else
  {
    if ( a2 == a3 )
      return v31 - __readfsqword(0x28u);
    v10 = src;
  }
  if ( strcmp(v10, "__LINKEDIT") )
  {
    v19 = *(__int64 **)(a1 + 88);
    v20 = v19[1];
    v21 = *v19;
    if ( v19[2] < (unsigned __int64)(v20 + 1) )
    {
      v21 = qvector_reserve();
      *v19 = v21;
      v20 = v19[1];
    }
    v22 = v21 + 80 * v20;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 64) = 0;
    *(_WORD *)(v22 + 72) = 0;
    *(_OWORD *)v22 = 0;
    *(_OWORD *)(v22 + 24) = 0;
    *(_OWORD *)(v22 + 48) = 0;
    ++v19[1];
    v23 = "CODE";
    sub_15ED0((__int64 *)(v22 + 16));
    *(_QWORD *)v22 = a2;
    v24 = *(_DWORD **)(v22 + 40);
    *(_QWORD *)(v22 + 8) = a3;
    if ( !a6 )
      v23 = "DATA";
    if ( *(_QWORD *)(v22 + 56) <= 4u )
    {
      v28 = qvector_reserve();
      *(_QWORD *)(v22 + 40) = v28;
      v24 = (_DWORD *)v28;
    }
    v25 = *(_DWORD *)v23;
    *(_QWORD *)(v22 + 48) = 5;
    *v24 = v25;
    *(_BYTE *)(*(_QWORD *)(v22 + 40) + 4LL) = 0;
    v26 = getinf_flag();
    *(_BYTE *)(v22 + 73) = a6 + 4;
    *(_BYTE *)(v22 + 72) = v26 + 1;
  }
  return v31 - __readfsqword(0x28u);
}

