unsigned __int64 __fastcall sub_D7840(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6, double a7)
{
  int v10; // r15d
  __int64 i; // rbx
  __int64 j; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  __int64 v20; // rax
  int v21; // [rsp+1Ch] [rbp-8Ch]
  int v22; // [rsp+20h] [rbp-88h]
  int v26; // [rsp+3Ch] [rbp-6Ch]
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a6 )
  {
    v26 = 4;
    v10 = 8;
  }
  else
  {
    v26 = 1;
    v10 = *(_DWORD *)(a3 + 80);
  }
  for ( i = a4[1]; i; --i )
  {
    if ( sub_64930(a5, *(_DWORD *)(*a4 + 4 * (i - 1))) )
    {
      for ( j = 0; j != i; ++j )
      {
        v22 = *(_DWORD *)(*a4 + 4 * j);
        v17 = sub_64BA0(a5, v22);
        v18 = v26;
        if ( v26 < v17 )
          v18 = v17;
        if ( v18 > v10 )
          v18 = v10;
        if ( !v17 )
          v18 = v10;
        v19 = sub_11CA90(v18);
        v28 = 0;
        v21 = v19;
        v29 = 0;
        cleanup_argloc();
        LODWORD(v28) = 3;
        LODWORD(v29) = v22;
        if ( a6 )
          sub_32C150(&v27, a3, v21);
        else
          sub_32C270(&v27, a3, v21);
        if ( !(_BYTE)v27 )
        {
          if ( !under_debugger )
            sub_383060(0xCE77u, a7);
          BUG();
        }
        v14 = a1[1];
        v15 = *a1;
        if ( a1[2] < (unsigned __int64)(v14 + 1) )
        {
          v20 = qvector_reserve((__int64)a1, v15, v14 + 1, 144);
          *a1 = v20;
          v15 = v20;
          v14 = a1[1];
        }
        a7 = 0.0;
        v16 = v15 + 144 * v14;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 112) = 1;
        *(_QWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v16 + 120) = -1;
        *(_QWORD *)(v16 + 128) = 0;
        *(_BYTE *)(v16 + 136) = 0;
        *(_OWORD *)v16 = 0;
        *(_OWORD *)(v16 + 24) = 0;
        *(_OWORD *)(v16 + 48) = 0;
        *(_OWORD *)(v16 + 64) = 0;
        ++a1[1];
        sub_6B870((__int64 *)(v16 + 16));
        copy_tinfo_t();
        if ( a2 )
          sub_D0190(a2, (__int64)&v28, v21);
        clear_tinfo_t();
        cleanup_argloc();
      }
      return v30 - __readfsqword(0x28u);
    }
  }
  return v30 - __readfsqword(0x28u);
}

