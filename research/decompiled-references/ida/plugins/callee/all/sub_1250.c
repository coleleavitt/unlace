_QWORD *sub_1250()
{
  int v0; // eax
  _QWORD *v1; // rbx

  v0 = *(_DWORD *)(get_ph() + 4);
  if ( (unsigned int)(v0 - 12) > 1 && v0 )
    return nullptr;
  v1 = (_QWORD *)qalloc_or_throw();
  memset(v1, 0, 0x68u);
  v1[1] = get_ph();
  v1[2] = get_ash();
  v1[3] = get_eah();
  *v1 = off_3D40;
  v1[12] = 0;
  *((_OWORD *)v1 + 2) = 0;
  *((_OWORD *)v1 + 3) = 0;
  *((_OWORD *)v1 + 4) = 0;
  *((_OWORD *)v1 + 5) = 0;
  return v1;
}

