__int64 sub_BC340()
{
  __int64 result; // rax

  result = mysql_server_end();
  if ( qword_241DF8 )
  {
    result = sub_19A260(qword_241DF8);
    qword_241DF8 = nullptr;
  }
  return result;
}
