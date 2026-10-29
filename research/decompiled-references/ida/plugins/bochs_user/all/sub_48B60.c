__int64 __fastcall sub_48B60(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // ebp
  unsigned __int64 v10; // rax
  int v11; // edx
  double v12; // xmm0_8

  if ( a3 > 0x200 )
    return 15;
  v9 = a3;
  v10 = qfsize();
  *a5 = 16;
  v11 = v9 + 4;
  *a6 = 63;
  while ( 1 )
  {
    v12 = (double)v9 * 1024.0 * 1024.0 * 0.0625 / 63.0 * 0.001953125;
    *a4 = (int)v12;
    if ( v10 < ((unsigned int)(int)v12 * (unsigned int)*a6 * (unsigned __int64)(unsigned int)*a5) << 9 )
      break;
    if ( ++v9 == v11 )
      return 15;
  }
  qfseek();
  qfseek();
  return 16 * (unsigned int)((unsigned int)qfputc() == -1);
}

