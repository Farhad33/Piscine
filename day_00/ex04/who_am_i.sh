# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    who_am_i.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marahimi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/24 16:48:15 by marahimi          #+#    #+#              #
#    Updated: 2016/10/25 10:51:51 by marahimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ldapwhoami -Q | cut -d":" -f2