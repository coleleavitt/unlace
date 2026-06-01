void __fastcall sub_1B910(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 fchunk; // rax
  int v16; // eax
  __int64 **v17; // rdi
  int v18; // r15d
  __int64 **v19; // rdi

  if ( *(_QWORD *)(a1 + 616) )
  {
    v10 = *(_QWORD *)(a3 + 16) + 16LL * *(_QWORD *)a2;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v10 != v11 )
    {
      v12 = v10 & v11;
      v13 = v10 == -1;
      v14 = -1;
      if ( !v13 )
        v14 = v12;
      v11 = v14;
    }
    fchunk = get_fchunk(*(_QWORD *)(a2 + 16));
    if ( !fchunk || fchunk != get_fchunk(v11) )
    {
      v16 = *(unsigned __int16 *)(a2 + 26);
      if ( (((_WORD)v16 - 2) & 0xFFFD) != 0 )
      {
        if ( under_debugger )
          BUG();
        interr(10362);
        sub_1BA30();
      }
      else
      {
        v17 = *(__int64 ***)(a1 + 616);
        if ( v17 )
        {
          v18 = 8 * v16;
          sub_1B520(v17, 8 * v16, a4, a5);
          if ( a7 != -1 )
          {
            v19 = *(__int64 ***)(a1 + 616);
            if ( v19 )
              sub_1B520(v19, v18, a6, a7);
          }
        }
      }
    }
  }
}

