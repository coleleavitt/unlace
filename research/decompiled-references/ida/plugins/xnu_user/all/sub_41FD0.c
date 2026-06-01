void __fastcall sub_41FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  char *v13; // r8
  char *v14; // rbx
  _DWORD *v15; // rsi
  bool v16; // cc
  int v17; // eax
  __int64 v18; // rax
  char *s1; // [rsp+0h] [rbp-40h]
  char *s1b; // [rsp+0h] [rbp-40h]
  char *s1a; // [rsp+0h] [rbp-40h]

  if ( a2 != a3 )
  {
    if ( !*(_QWORD *)(a5 + 8)
      || (s1a = *(char **)a5, strcmp(*(const char **)a5, "__DWARF")) && strcmp(s1a, "__LINKEDIT") )
    {
      v9 = *(__int64 **)(a1 + 88);
      v10 = v9[1];
      v11 = *v9;
      if ( v9[2] < (unsigned __int64)(v10 + 1) )
      {
        v11 = qvector_reserve();
        *v9 = v11;
        v10 = v9[1];
      }
      v12 = v11 + 80 * v10;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 64) = 0;
      *(_WORD *)(v12 + 72) = 0;
      *(_OWORD *)v12 = 0;
      *(_OWORD *)(v12 + 24) = 0;
      *(_OWORD *)(v12 + 48) = 0;
      ++v9[1];
      s1 = (char *)v12;
      sub_15ED0((__int64 *)(v12 + 16));
      v13 = s1;
      *((_QWORD *)s1 + 1) = a3;
      v14 = "CODE";
      v15 = *((_DWORD **)s1 + 5);
      if ( !a6 )
        v14 = "DATA";
      v16 = *((_QWORD *)s1 + 7) <= 4u;
      *(_QWORD *)s1 = a2;
      if ( v16 )
      {
        v18 = qvector_reserve();
        v13 = s1;
        v15 = (_DWORD *)v18;
        *((_QWORD *)s1 + 5) = v18;
      }
      v17 = *(_DWORD *)v14;
      s1b = v13;
      *((_QWORD *)v13 + 6) = 5;
      *v15 = v17;
      *(_BYTE *)(*((_QWORD *)v13 + 5) + 4LL) = 0;
      v13[72] = getinf_flag() + 1;
      s1b[73] = a6 + 4;
    }
  }
}

