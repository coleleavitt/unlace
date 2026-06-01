_QWORD *__fastcall init()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)qalloc_or_throw();
  memset(v0, 0, 0x88u);
  v0[1] = get_ph();
  v0[2] = get_ash();
  v0[3] = get_eah();
  *((_OWORD *)v0 + 2) = 0;
  *((_OWORD *)v0 + 3) = 0;
  *((_OWORD *)v0 + 4) = 0;
  *((_OWORD *)v0 + 5) = 0;
  *v0 = &off_443D08;
  v0[12] = 0;
  v0[15] = 0;
  *((_BYTE *)v0 + 128) = 0;
  *(_OWORD *)(v0 + 13) = 0;
  return v0;
}

