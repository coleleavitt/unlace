unsigned __int64 __fastcall sub_D7280(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  unsigned int v9; // r15d
  __int64 i; // rbx
  __int64 j; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+1Ch] [rbp-8Ch]
  int v21; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+3Ch] [rbp-6Ch]
  char v26[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  __int64 v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a6 )
  {
    v25 = 4;
    v9 = 8;
  }
  else
  {
    v25 = 1;
    v9 = *(_DWORD *)(a3 + 80);
  }
  for ( i = a4[1]; i; --i )
  {
    if ( sub_64330(a5, *(_DWORD *)(*a4 + 4 * (i - 1))) )
    {
      for ( j = 0; j != i; ++j )
      {
        v21 = *(_DWORD *)(*a4 + 4 * j);
        v16 = sub_645A0(a5, v21);
        v17 = (unsigned int)v25;
        if ( v25 < v16 )
          v17 = (unsigned int)v16;
        if ( (int)v17 > (int)v9 )
          v17 = v9;
        if ( !v16 )
          v17 = v9;
        v18 = sub_11C4D0(v17);
        v27 = 0;
        v20 = v18;
        v28 = 0;
        cleanup_argloc();
        LODWORD(v27) = 3;
        LODWORD(v28) = v21;
        if ( a6 )
          sub_32C480(v26, a3, v20);
        else
          sub_32C5A0(v26, a3, v20);
        if ( !v26[0] )
        {
          if ( !under_debugger )
            sub_3835A0(52855);
          BUG();
        }
        v13 = a1[1];
        v14 = *a1;
        if ( a1[2] < (unsigned __int64)(v13 + 1) )
        {
          v19 = qvector_reserve();
          *a1 = v19;
          v14 = v19;
          v13 = a1[1];
        }
        v15 = v14 + 144 * v13;
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 112) = 1;
        *(_QWORD *)(v15 + 40) = 0;
        *(_DWORD *)(v15 + 120) = -1;
        *(_QWORD *)(v15 + 128) = 0;
        *(_BYTE *)(v15 + 136) = 0;
        *(_OWORD *)v15 = 0;
        *(_OWORD *)(v15 + 24) = 0;
        *(_OWORD *)(v15 + 48) = 0;
        *(_OWORD *)(v15 + 64) = 0;
        ++a1[1];
        sub_6B2B0((__int64 *)(v15 + 16));
        copy_tinfo_t();
        if ( a2 )
          sub_CFBD0(a2, (__int64)&v27, v20);
        clear_tinfo_t();
        cleanup_argloc();
      }
      return v29 - __readfsqword(0x28u);
    }
  }
  return v29 - __readfsqword(0x28u);
}

