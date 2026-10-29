unsigned __int64 __fastcall idapython_show_wait_box(char a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi

  v3 = xmmword_245E8;
  v4 = qword_245E0;
  if ( *((_QWORD *)&xmmword_245E8 + 1) < (unsigned __int64)(xmmword_245E8 + 1) )
  {
    qword_245E0 = qvector_reserve();
    v4 = qword_245E0;
    v3 = xmmword_245E8;
  }
  *(_BYTE *)(v4 + v3) = a1;
  *(_QWORD *)&xmmword_245E8 = xmmword_245E8 + 1;
  return sub_7BC0((__int64)"%s", a2);
}

