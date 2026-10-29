__int64 sub_48CB0()
{
  unsigned int v0; // r12d

  v0 = 0;
  if ( qfopen() )
  {
    if ( !(unsigned int)qfseek() )
      LOBYTE(v0) = qfread() == 512;
    qfclose();
  }
  return v0;
}

