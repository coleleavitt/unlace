__int64 sub_4440()
{
  __int64 v0; // rbx

  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)v0 = &off_1BB88;
  *(_QWORD *)(v0 + 96) = 0;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  return v0;
}

