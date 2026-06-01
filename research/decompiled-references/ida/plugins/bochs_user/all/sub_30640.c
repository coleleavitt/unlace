__int64 __fastcall sub_30640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 )
  {
    if ( qfopen() )
    {
      qfseek();
LABEL_4:
      qfwrite();
      qfclose();
      return 1;
    }
  }
  else if ( qfopen() )
  {
    goto LABEL_4;
  }
  return 0;
}

