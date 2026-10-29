__int64 __fastcall sub_163CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx

  v7 = sub_15F8D0(
         a1,
         (__int64)"CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,json HIDDEN,root HIDDEN)",
         a3,
         a4,
         (__int64)a5,
         a6);
  if ( v7 )
    return v7;
  if ( (unsigned int)sub_FEBD0(
                       a1,
                       (__int64)"CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,json HIDDEN,root HIDDEN)") )
  {
    *a5 = 0;
    return 7;
  }
  else
  {
    v9 = sub_D1E10(24, (__int64)"CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,json HIDDEN,root HIDDEN)");
    *a5 = v9;
    if ( !v9 )
      return 7;
    *(_QWORD *)(v9 + 16) = 0;
    *(_OWORD *)v9 = 0;
    sub_EA950(a1, 2, v10);
    return 0;
  }
}
