__int64 __fastcall sub_2FED0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // r12
  __m128 v14; // xmm0
  __int64 generic_linput; // r12
  unsigned int v16; // ebx
  struct _Unwind_Exception *v18; // rbx

  v8 = sub_2FE60(a1, a3);
  if ( v8 && (v9 = v8, v8[6]) && sub_2FC60((__int64)v8, a4) != -1 )
  {
    v10 = operator new(0x38u);
    v11 = v9[6];
    v12 = *((_DWORD *)v9 + 16) == 12;
    v13 = v10;
    v14 = _mm_loadh_ps((const double *)v9 + 7);
    *(_QWORD *)v10 = off_98058;
    *(_QWORD *)(v10 + 24) = v11;
    *(__m128 *)(v10 + 32) = v14;
    *(_BYTE *)(v10 + 48) = v12;
    *(_QWORD *)(v10 + 8) = qlsize();
    *(_DWORD *)(v13 + 16) = 0;
    generic_linput = create_generic_linput();
    if ( !generic_linput )
    {
      if ( !under_debugger )
      {
        v18 = (struct _Unwind_Exception *)interr();
        close_linput();
        _Unwind_Resume(v18);
      }
      BUG();
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(
            a1,
            generic_linput,
            a5,
            a2);
    close_linput();
  }
  else
  {
    return 0;
  }
  return v16;
}

