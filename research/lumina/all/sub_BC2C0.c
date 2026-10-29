__int64 (__fastcall **__fastcall sub_BC2C0(_QWORD *a1))(void *)
{
  __int64 (__fastcall **result)(void *); // rax

  result = &off_239D88;
  *a1 = &off_239D88;
  if ( a1[2] )
    return (__int64 (__fastcall **)(void *))mysql_close();
  return result;
}
