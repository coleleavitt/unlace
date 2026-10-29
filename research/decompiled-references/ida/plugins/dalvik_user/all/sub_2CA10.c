__int64 __fastcall sub_2CA10(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx

  qmutex_lock();
  v4 = sub_2C930(a1, a3[1], a3[2]);
  if ( v4 )
  {
    if ( a2 )
    {
      v5 = -1;
      if ( (*(_BYTE *)(v4 + 168) & 2) != 0 )
        v5 = *(_QWORD *)(v4 + 336) + 2LL * (a3[3] - *(_QWORD *)(v4 + 96));
LABEL_5:
      *a2 = v5;
    }
  }
  else
  {
    v6 = 0;
    if ( *(_BYTE *)(a1[2] + 56LL) )
      goto LABEL_7;
    v5 = -1;
    if ( a2 )
      goto LABEL_5;
  }
  v6 = 1;
LABEL_7:
  qmutex_unlock();
  return v6;
}

