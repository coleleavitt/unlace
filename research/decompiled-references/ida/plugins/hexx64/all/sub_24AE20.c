_QWORD *__fastcall sub_24AE20(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, double a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = (_QWORD *)a3;
  v8 = *(int *)(a3 + 8);
  v11[1] = __readfsqword(0x28u);
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * v8 + 11) & 2) != 0 && (*(_BYTE *)(a3 + 56) & 4) == 0 )
    sub_281D10(*(_QWORD *)(a1 + 328), a3);
  *v7 = *(_QWORD *)(a2 + 24);
  if ( a5 )
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      v11[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      sub_32C270(v11, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 68));
    }
    v7 = sub_24AA50(a1, *(__int64 **)(a2 + 24), a2 + 64, v11, (__int64)v7, a6);
    clear_tinfo_t();
  }
  else
  {
    sub_246B40((__int64)v7, *(_QWORD *)(a1 + 328), a4, a6);
  }
  return v7;
}

