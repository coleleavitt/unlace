int sub_12BA0()
{
  _DWORD *v0; // rax

  qword_D0910 = (__int64)off_C8D30;
  dword_D0918 = 0;
  qword_D08F0 = nullptr;
  *(_OWORD *)&n = 0;
  v0 = (_DWORD *)qvector_reserve(&qword_D08F0, 0, 8, 1);
  qword_D08F0 = v0;
  n = 8;
  *v0 = 1380013892;
  *(_DWORD *)((char *)v0 + 3) = 540690002;
  *((_BYTE *)qword_D08F0 + 7) = 0;
  return __cxa_atexit(sub_52F00, &qword_D08F0, &off_C71A0);
}
