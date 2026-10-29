unsigned __int8 *__fastcall sub_176840(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // rbp
  __int64 v4; // r12
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rax
  unsigned __int8 **v7; // rcx
  unsigned __int8 **v8; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = a1;
  if ( !a1 )
  {
    sub_18FA40(1563);
    return v2;
  }
  if ( *a1 == 10 )
  {
    ptr = nullptr;
    v10 = 0;
    v4 = sub_186950();
    v5 = a1;
    while ( 1 )
    {
      v6 = (unsigned __int8 *)sub_1726A0((__int64)(v5 + 8), v4);
      v5 = v6;
      if ( !v6 )
        break;
      if ( *v6 != 10 || (a2 & 1) != 0 )
      {
        if ( (a2 & 2) == 0 )
        {
          v2 = v6;
LABEL_15:
          if ( ptr )
          {
            *(_QWORD *)&v10 = 0;
            j__free(ptr);
          }
          return v2;
        }
        *a1 = 2;
        if ( !(unsigned int)sub_176730(a1, v6) )
          goto LABEL_15;
LABEL_14:
        v2 = nullptr;
        goto LABEL_15;
      }
      v7 = (unsigned __int8 **)((char *)ptr + 8 * v10);
      if ( ptr != v7 )
      {
        v8 = (unsigned __int8 **)ptr;
        while ( v5 != *v8 )
        {
          if ( v7 == ++v8 )
            goto LABEL_17;
        }
        if ( v8 != v7 )
          break;
      }
LABEL_17:
      if ( *((_QWORD *)&v10 + 1) < (unsigned __int64)(v10 + 1) )
      {
        ptr = (void *)sub_1987B0(&ptr, ptr, v10 + 1, 8);
        v7 = (unsigned __int8 **)((char *)ptr + 8 * v10);
      }
      *v7 = v5;
      *(_QWORD *)&v10 = v10 + 1;
    }
    sub_18FA40(1563);
    goto LABEL_14;
  }
  return v2;
}
