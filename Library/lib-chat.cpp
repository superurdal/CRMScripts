#setLanguageLevel 3;

/*
 * Library for working with SuperOffice Chat
 * Frode Lillerud, Ganske Enkelt AS, 21.des 2017
 */

Integer ENUM_CHAT_STATUS_PRESENT = 1;
Integer ENUM_CHAT_STATUS_AWAY = 0;

Void setChatAgentStatus(Integer ejUserId, Integer newStatus)
{
  SearchEngine se;
  se.addData("ejuser.chat_status", newStatus.toString());
  se.addCriteria("ejuser.id", "equals", ejUserId.toString());
  se.update();
}