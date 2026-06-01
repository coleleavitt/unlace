__int64 __fastcall sub_10500(__int64 a1)
{
  if ( (unsigned __int8)is_miniidb() )
  {
    sub_9EE0((__int64)"Trace replayer needs a database, sorry.\n");
    return 0xFFFFFFFFLL;
  }
  else
  {
    sub_A990((__int64)&off_1FFA0, 3u, 1);
    sub_E320(1);
    sub_103A0(a1);
    sub_10240(a1);
    *(_BYTE *)(a1 + 1024) = 1;
    *(_BYTE *)(a1 + 1027) = 0;
    return 1;
  }
}

