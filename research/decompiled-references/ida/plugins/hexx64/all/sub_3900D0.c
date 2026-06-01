__int64 __fastcall sub_3900D0(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // eax

  v2 = sub_1CE9E0(*(_QWORD *)(a1 + 24));
  result = 0;
  if ( v2 )
  {
    get_func();
    v4 = -1;
    if ( a2 )
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL);
    *((_DWORD *)v2 + 16) = v4;
    update_func();
    mark_builtin_widgets();
    sub_38F620(a1, 1);
    return 1;
  }
  return result;
}

